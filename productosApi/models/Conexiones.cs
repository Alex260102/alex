// ...existing code...
using Microsoft.EntityFrameworkCore;
namespace TodoApi.models;
public class Conexiones : DbContext
{
    public Conexiones(DbContextOptions<Conexiones> options) : base(options)
    {
    }

    public DbSet<Productos> Productos { get; set; } = null!;
}
// ...existing code...